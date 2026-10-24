/* func_011820 -- calls the local routine func_101A50 with the global record
   D_001DE420, two float constants and the global float D_001DE3E8. */
extern char D_001DE420[];
extern float D_001DE3E8;

extern void func_101A50(void *p, float a, float b, float c);

void func_011820(void)
{
    func_101A50((void *)D_001DE420, 62.831853f, 20.0f, D_001DE3E8);
}
