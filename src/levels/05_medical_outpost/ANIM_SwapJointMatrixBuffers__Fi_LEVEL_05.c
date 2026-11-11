extern unsigned int D_001E55FC;
extern unsigned int D_001E5600;
extern unsigned int D_001E5604;
void ANIM_SwapJointMatrixBuffers__Fi(int value)
{
    if (D_001E5600 > D_001E55FC)
        D_001E55FC = D_001E5600;
    if (value < 0)
        D_001E5600 = 0;
    else
        D_001E5600 = value;
    D_001E5604 = D_001E5604 == 0;
}