package loja;

public class PessoaJuridica extends Pessoa{
	private String cnpj;
	private String razaoSocial;
	private String nome, endereco, telefone;
	
	PessoaJuridica(String nome, String endereco, String telefone, String cnpj, String razaoSocial) {
		super(nome, endereco, telefone);
		
		this.cnpj = cnpj;
		this.razaoSocial = razaoSocial;
	}
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getEndereco() {
		return endereco;
	}

	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}

	public String getTelefone() {
		return telefone;
	}

	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}

	public String getCnpj() {
		return cnpj;
	}
	public void setCnpj(String cnpj) {
		this.cnpj = cnpj;
	}
	public String getRazaoSocial() {
		return razaoSocial;
	}
	public void setRazaoSocial(String razaoSocial) {
		this.razaoSocial = razaoSocial;
	}
}
