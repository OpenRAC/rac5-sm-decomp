/* FRONTEND:0x005EC0 -- stores the two float arguments in the global vector. */
extern char D_0002AFB0[];
extern char D_0002AFC0[];

void func_005EC0(float x, float y)
{
    D_0002AFC0[0] = 1;
    *(float *)D_0002AFB0 = x;
    *((float *)D_0002AFB0 + 1) = y;
}
