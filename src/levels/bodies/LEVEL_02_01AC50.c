/* LEVEL_02.REL:0x01AC50 -- parks the float argument in the global at
   0x002470C8. */
extern float D_002470C8;

void func_01AC50(float value)
{
    D_002470C8 = value;
}
