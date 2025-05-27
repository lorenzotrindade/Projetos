function validadeform() {
    let x = document.forms['myform']["fname"].value;if (x== "") {
        alert("macaco branco");
        return false;
    }
}