extern unsigned int D_001FF27C;
extern unsigned int D_001FF280;
extern unsigned int D_001FF284;
void ANIM_SwapJointMatrixBuffers__Fi(int value)
{
    if (D_001FF280 > D_001FF27C)
        D_001FF27C = D_001FF280;
    if (value < 0)
        D_001FF280 = 0;
    else
        D_001FF280 = value;
    D_001FF284 = D_001FF284 == 0;
}