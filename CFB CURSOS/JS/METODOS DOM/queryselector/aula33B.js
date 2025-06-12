// query selector composto


const query_cursotodos=[...document.querySelectorAll(".c1,p")]
// to falando quero os elementos que tem classe c1 e ainda são elemento p de padragrafo


const query_divtodas=[...document.querySelectorAll("div[class]")]
// todas as div, que tem o elemento class

const query_todasDIVeP=[...document.querySelectorAll('div > p')]
// quero as div q tem dentrodela os p