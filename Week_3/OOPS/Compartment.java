import java.util.Random;

public abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "Notice: First Class Compartment - Authorized passengers only.";
    }
}

class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Notice: Ladies Compartment - Strictly reserved for women.";
    }
}

class General extends Compartment {
    @Override
    public String notice() {
        return "Notice: General Compartment - Open to all valid ticket holders.";
    }
}

class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Notice: Luggage Van - Strictly for heavy luggage and cargo.";
    }
}
