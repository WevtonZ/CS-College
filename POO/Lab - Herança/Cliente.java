package loja;

public class Cliente extends PessoaFisica{
	public Cliente(String nome, String endereco, String telefone, String cpf, char sexo, int estadoCivil, double renda,
			String interesses, String profissao) {
		super(nome, endereco, telefone, cpf, sexo, estadoCivil);
		this.renda = renda;
		this.interesses = interesses;
		this.profissao = profissao;
	}
	
	private double renda;
	private String interesses;
	private String profissao;
	
	public double getRenda() {
		return renda;
	}
	public void setRenda(double renda) {
		this.renda = renda;
	}
	public String getInteresses() {
		return interesses;
	}
	public void setInteresses(String interesses) {
		this.interesses = interesses;
	}
	public String getProfissao() {
		return profissao;
	}
	public void setProfissao(String profissao) {
		this.profissao = profissao;
	}
}
