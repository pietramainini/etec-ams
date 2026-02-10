function Inicializar() {
    var canvas = document.getElementById("canvas");
    var jogador = document.getElementById("jogador")
    var contexto = canvas.getContext("2d")
    canvas.width = window.innerWidth
    canvas.height = window.innerHeight
}

var player = {
    elemento: jogador,
    velocidade: 15,
    direcao: 0, // 0 cima, 1 baixo, 2 esquerda, 3 direita
    posicaoY: window.innerHeight / 2,
    posicaoX: window.innerWidth / 2,
    setMovimento: function(e) {
        if (e.keyCode == 37) { // esquerda
            this.posicaoX = this.posicaoX - this.velocidade;
        }
        if (e.keyCode == 38) { // cima
            this.posicaoY = this.posicaoY - this.velocidade;
        }
        if (e.keyCode == 39) { // direita
            this.posicaoX = this.posicaoX + this.velocidade;
        }
        if (e.keyCode == 40) { // baixo
            this.posicaoY = this.posicaoY + this.velocidade;
        }
    }
}