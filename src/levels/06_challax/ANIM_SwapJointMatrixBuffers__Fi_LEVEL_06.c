extern unsigned int D_001E517C;
extern unsigned int D_001E5180;
extern unsigned int D_001E5184;
void ANIM_SwapJointMatrixBuffers__Fi(int value)
{
    if (D_001E5180 > D_001E517C)
        D_001E517C = D_001E5180;
    if (value < 0)
        D_001E5180 = 0;
    else
        D_001E5180 = value;
    D_001E5184 = D_001E5184 == 0;
}