using UnityEngine;

[System.Serializable]
public class NivelTutorial
{
    public string nomeNivel = "Novo Nível";
    public string[] instrucoes;
    public GameObject[] pecasDestaque;
}

public class ControladorTutorial : MonoBehaviour
{
    [Tooltip("Frases de orientação padrão")]
    [SerializeField] private string[] instrucoes;

    [SerializeField] private GameObject[] pecasDestaque;

    [Header("-- Múltiplos Níveis --")]
    [SerializeField] private NivelTutorial[] niveis;
    [SerializeField] private int nivelAtual = 0;

    [Header("-- Confirmação de Nível --")]
    [SerializeField] private GameObject botaoProximoNivel;
    [SerializeField] private bool aguardandoConfirmacao = false;

    [Header("-- Configurações VR --")]
    [SerializeField] private string[] tagMaoVR = new string[] { "LeftHand", "RightHand", "MaoVR" };

    [Tooltip("Tempo mínimo de colisões")]
    [SerializeField] private float tempoCoolDown = 2.0f;
    [SerializeField] private int etapaAtual = 0;

    void Start()
    {
        if (botaoProximoNivel != null)
        {
            botaoProximoNivel.SetActive(false);
        }
        mostrarEtapa();
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.D))
        {
            AvancarEtapa();
        }
        if (Input.GetKeyDown(KeyCode.A))
        {
            VoltarEtapa();
        }
    }

    public void AvancarEtapa()
    {
        if (aguardandoConfirmacao) return;

        string[] instrucoesAtuais = GetInstrucoesAtuais();

        if (etapaAtual < instrucoesAtuais.Length - 1)
        {
            etapaAtual++;
            mostrarEtapa();
        }
        else if (niveis != null && niveis.Length > 0 && nivelAtual < niveis.Length - 1)
        {
            desativarPecasAtuais();
            aguardandoConfirmacao = true;

            if (botaoProximoNivel != null)
            {
                botaoProximoNivel.SetActive(true);
                criarColisor(botaoProximoNivel);
            }
        }
    }

    public void ConfirmarProximoNivel()
    {
        if (!aguardandoConfirmacao) return;

        aguardandoConfirmacao = false;

        if (botaoProximoNivel != null)
        {
            botaoProximoNivel.SetActive(false);
        }

        nivelAtual++;
        etapaAtual = 0;
        mostrarEtapa();
    }

    public void ReiniciarTutorial()
    {
        aguardandoConfirmacao = false;

        if (botaoProximoNivel != null)
        {
            botaoProximoNivel.SetActive(false);
        }

        nivelAtual = 0;
        etapaAtual = 0;
        mostrarEtapa();
    }

    public void VoltarEtapa()
    {
        if (aguardandoConfirmacao)
        {
            aguardandoConfirmacao = false;
            if (botaoProximoNivel != null)
            {
                botaoProximoNivel.SetActive(false);
            }
            mostrarEtapa();
            return;
        }

        if (etapaAtual > 0)
        {
            etapaAtual--;
            mostrarEtapa();
        }
        else if (niveis != null && niveis.Length > 0 && nivelAtual > 0)
        {
            nivelAtual--;
            string[] instrucoesAnteriores = GetInstrucoesAtuais();
            etapaAtual = instrucoesAnteriores.Length - 1;
            mostrarEtapa();
        }
    }

    void mostrarEtapa()
    {
        GameObject[] pecasAtuais = GetPecasAtuais();

        if (pecasAtuais != null && pecasAtuais.Length > 0)
        {
            for (int i = 0; i < pecasAtuais.Length; i++)
            {
                if (pecasAtuais[i] != null)
                {
                    bool e_atual = (i == etapaAtual);
                    pecasAtuais[i].SetActive(e_atual);

                    if (e_atual)
                    {
                        criarColisor(pecasAtuais[i]);
                    }
                }
            }
        }
        else
        {
            Debug.LogWarning("Peça selecionada está vazia");
        }
    }

    void desativarPecasAtuais()
    {
        GameObject[] pecasAtuais = GetPecasAtuais();
        if (pecasAtuais != null)
        {
            for (int i = 0; i < pecasAtuais.Length; i++)
            {
                if (pecasAtuais[i] != null)
                {
                    pecasAtuais[i].SetActive(false);
                }
            }
        }
    }

    string[] GetInstrucoesAtuais()
    {
        if (niveis != null && niveis.Length > 0 && nivelAtual < niveis.Length)
        {
            return niveis[nivelAtual].instrucoes;
        }
        return instrucoes;
    }

    GameObject[] GetPecasAtuais()
    {
        if (niveis != null && niveis.Length > 0 && nivelAtual < niveis.Length)
        {
            return niveis[nivelAtual].pecasDestaque;
        }
        return pecasDestaque;
    }

    void criarColisor(GameObject peca)
    {
        Collider colisorExistente = peca.GetComponent<Collider>();
        if (colisorExistente == null)
        {
            colisorExistente = peca.AddComponent<BoxCollider>();
        }
        colisorExistente.isTrigger = true;
    }
}
