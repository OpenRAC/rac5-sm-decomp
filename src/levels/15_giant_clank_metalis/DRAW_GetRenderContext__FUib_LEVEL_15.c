extern char D_001B2FB0[];

int DRAW_GetRenderContext__FUib(int a, int b)
{
    return a * 0x170c + ((int)D_001B2FB0 + b * 0xe4);
}
