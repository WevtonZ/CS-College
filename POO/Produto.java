package Wevton;
public class Produto {
	String cod_seq;
	String nome_prod;
	int qtd;
	String tipo_prod;
	double val_prod;
	
	public Produto(String cod_seq, String nome_prod, int qtd, String tipo_prod, double val_prod) {
		super();
		this.cod_seq = cod_seq;
		this.nome_prod = nome_prod;
		this.qtd = qtd;
		this.tipo_prod = tipo_prod;
		this.val_prod = val_prod;
	}
	
	@Override
	public String toString() {
		return "Produto [cod_seq=" + cod_seq + ", nome_prod=" + nome_prod + ", qtd=" + qtd + ", tipo_prod=" + tipo_prod
				+ ", val_prod=" + val_prod + "]\n";
	}
	
	public double vender(int qtd) {
		if(qtd > this.qtd) {
			return -1;
		}
		this.qtd -= qtd;
		return this.val_prod * qtd;
	}
	
	public boolean isEqual(Produto obj) {
		return cod_seq.equals(obj.cod_seq) && nome_prod.equals(obj.nome_prod);
	}
	
	public void comprar(int qtd) {
		this.qtd += qtd;
	}
	
	public void comprar(int qtd, double new_val) {
		this.qtd += qtd;
		this.val_prod = new_val;
	}
	
	public void inserir(String nome, int qtd, String tipo, double valor) {
		this.nome_prod = nome;
		this.qtd = qtd;
		this.tipo_prod = tipo;
		this.val_prod = valor;
	}
}
