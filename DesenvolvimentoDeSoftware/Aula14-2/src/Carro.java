public class Carro extends Veiculo{

    private String motor;

    public Carro(String marca, int ano, String cor, String motor) {
        super(marca, ano, cor);
        this.motor = motor;
    }

    public String getMotor() {
        return motor;
    }

    public void setMotor(String motor) {
        this.motor = motor;
    }

    @Override
    public String toString() {
        String txt = super.toString() + "\nMotor: " + motor;

        return txt;
    }
   
}