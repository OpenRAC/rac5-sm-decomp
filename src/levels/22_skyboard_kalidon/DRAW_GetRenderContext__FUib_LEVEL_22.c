extern char D_001F0B30[];

int DRAW_GetRenderContext__FUib(int a, int b)
{
    return a * 0x170c + ((int)D_001F0B30 + b * 0xe4);
}
