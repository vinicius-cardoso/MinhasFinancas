#include "Usuario.hpp"

int main(){
    Usuario user1 = Usuario("Vinicius Cardoso", "viniciusc");

    cout << "Nome: " << user1.GetNome() << endl;
    cout << "Username: " << user1.GetUsername() << endl;

    Carteira carteira1 = Carteira("carteira1");

    Conta conta1 = Conta("Banco Inter");
    carteira1.AdicionarConta(&conta1);

    conta1.Depositar(2500);
    conta1.Sacar(500);

    cout << "Saldo (" << conta1.GetNomeConta() << ") : R$ " << conta1.GetSaldo() << endl;

    Conta conta2 = Conta("NuBank");
    carteira1.AdicionarConta(&conta2);

    conta2.Depositar(1500);
    conta2.Sacar(500);

    cout << "Saldo (" << conta2.GetNomeConta() << ") : R$ " << conta2.GetSaldo() << endl;
    
    cout << "Contas: " << carteira1.GetQtdContas() << endl;
    cout << "Saldo total: R$ " << carteira1.GetSaldoTotal() << endl;
    
    carteira1.RemoverTodasContas();

    // carteira1.RemoverConta(&conta1);

    cout << "Contas: " << carteira1.GetQtdContas() << endl;
    cout << "Saldo total: R$ " << carteira1.GetSaldoTotal() << endl;

    // ~Conta("NuBank");

    // cout << "Contas: " << carteira1.GetQtdContas() << endl;
    // cout << "Saldo total: R$ " << carteira1.GetSaldoTotal() << endl;

}