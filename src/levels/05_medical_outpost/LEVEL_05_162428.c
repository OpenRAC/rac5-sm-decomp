/* LEVEL_05:162428 -- builds a ten-word scratch block, stamps the global float
   into its second word and forwards it with func_161DB0. */
extern float D_0022111C;

void func_0198C0(char *buf);
void func_161DB0(int a0, int a1, char *buf);

void func_162428(int a0, int a1)
{
    char buf[0x10];

    func_0198C0(buf);
    *(float *)(buf + 4) = D_0022111C;
    func_161DB0(a0, a1, buf);
}
