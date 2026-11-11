/* LEVEL_20:094A48 -- picks one of the two stored floats depending on the flag
   D_0010D184. */
extern unsigned char D_0010D184;
extern float D_0010D188;
extern float D_0010D18C;

float func_094A48(void)
{
    if (D_0010D184 == 0) {
        return D_0010D188;
    }
    return D_0010D18C;
}
