package hphp;

public class HphpObject extends HphpVariant {
  protected HphpObject(long ptr) {
    super(ptr);
  }
  
  public HphpVariant invoke(String func, HphpArray args) {
    return Hphp.invokeMethod(this.ptr, func, args.ptr);
  }

  public HphpVariant get(HphpVariant key) {
    return Hphp.get(this.ptr, key.ptr);
  }
}
