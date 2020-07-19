class Billetera 
{ 
    public:
    int n_billetes;
    Billetera() = default;
    Billetera(Billetera &&o) 
    { 
    this->n_billetes = o.n_billetes
    o.n_billetes= 0; 
    } 
};

int main(){
    Billetera a; 
    a.n_billetes = 1; 
    Billetera b (std::move(a)); // B(B&& other); 
    std::cout << a.n_billetes << std::endl; //0 
    std::cout << b.n_billetes << std::endl; //1
}
