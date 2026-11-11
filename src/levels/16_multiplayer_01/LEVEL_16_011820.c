/* func_011820 -- calls the local routine func_101BA8 with the global record
   D_001DE2A0, two float constants and the global float D_001DE268. */
extern char D_001DE2A0[];
extern float D_001DE268;

extern void func_101BA8(void *p, float a, float b, float c);

void func_011820(void)
{
    func_101BA8((void *)D_001DE2A0, 62.831853f, 20.0f, D_001DE268);
}
