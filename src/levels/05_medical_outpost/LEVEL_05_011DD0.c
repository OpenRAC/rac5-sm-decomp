/* func_011DD0 -- calls the local routine func_11D488 with the global record
   D_0021B2A0, two float constants and the global float D_0021B268. */
extern char D_0021B2A0[];
extern float D_0021B268;

extern void func_11D488(void *p, float a, float b, float c);

void func_011DD0(void)
{
    func_11D488((void *)D_0021B2A0, 62.831853f, 20.0f, D_0021B268);
}
