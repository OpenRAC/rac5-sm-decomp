extern unsigned int D_0010698C;
extern unsigned int D_00106990;
extern unsigned int D_00106994;
void ANIM_SwapJointMatrixBuffers__Fi(int value)
{
    if (D_00106990 > D_0010698C)
        D_0010698C = D_00106990;
    if (value < 0)
        D_00106990 = 0;
    else
        D_00106990 = value;
    D_00106994 = D_00106994 == 0;
}