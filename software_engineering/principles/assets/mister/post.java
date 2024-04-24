package assets.mister;

public class post {
    enum type{
        Regular,
        Substitute
    }
    int type;

    public post(int type){
        this.type = type;
    }

    public int getType() {
        return type;
    }

    public void setType(int type) {
        this.type = type;
    }
}
