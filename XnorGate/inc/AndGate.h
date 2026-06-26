#include <systemc.h>
SC_MODULE(AndGate)
{
  sc_in<bool>p_andIn_a,p_andIn_b;
  sc_out<bool>p_andOut_c;
  
  void and_operation();
    
  SC_CTOR(AndGate)
  {
   	SC_METHOD(and_operation);
    //dont_initialize();
    sensitive << p_andIn_a <<p_andIn_b;
  }
};