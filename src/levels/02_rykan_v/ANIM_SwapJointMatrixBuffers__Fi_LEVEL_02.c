extern unsigned int D_0020B23C;
extern unsigned int D_0020B240;
extern unsigned int D_0020B244;
void ANIM_SwapJointMatrixBuffers__Fi(int value)
{
    if (D_0020B240 > D_0020B23C)
        D_0020B23C = D_0020B240;
    if (value < 0)
        D_0020B240 = 0;
    else
        D_0020B240 = value;
    D_0020B244 = D_0020B244 == 0;
}