function Clicou(elemento) {
    if (elemento.classList.contains("celula")) {
        elemento.classList.remove("celula");
    } else {
        elemento.classList.add("celula");
    }
}