class LapisCor {
	public String cor;
	public String fabricante;
	public boolean apontado;

	public void apontar() {
		apontado = true;
	}
	public void pintar() {
		if (!apontado) {
			System.out.println("Por favor, apontar o lapis.");
		}
		else
			System.out.println("Pintando o desenho!");
	}
}

class Main {
	public static void main(String[] args) {
		LapisCor lapisUm = new LapisCor();
		lapisUm.cor = "azul";
		lapisUm.apontado = false;
		lapisUm.fabricante = "Faber Castel";
		System.out.println("Lapis um da cor " + lapisUm.cor);
		System.out.println("Lapis um do fabricante " + lapisUm.fabricante);
		lapisUm.apontar();
		lapisUm.pintar();
		
		LapisCor lapisDois = new LapisCor();
		lapisDois.cor = "rosa";
		lapisDois.apontado = true;
		lapisDois.fabricante = "Maped";
		System.out.println("Lápis dois da cor " + lapisDois.cor);
		System.out.println("Lapis dois do fabricante " + lapisDois.fabricante);
		lapisDois.pintar();
		
		LapisCor lapisTres = new LapisCor();
		lapisTres.cor = "laranja";
		lapisTres.apontado = false;
		lapisTres.fabricante = "Cis";
		System.out.println("Lápis três da cor " + lapisTres.cor);
		System.out.println("Lapis três do fabricante " + lapisTres.fabricante);
		lapisTres.pintar();
	}
}