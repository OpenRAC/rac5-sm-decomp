extern unsigned int D_0020E8FC;
extern unsigned int D_0020E900;
extern unsigned int D_0020E904;
void ANIM_SwapJointMatrixBuffers__Fi(int value)
{
    if (D_0020E900 > D_0020E8FC)
        D_0020E8FC = D_0020E900;
    if (value < 0)
        D_0020E900 = 0;
    else
        D_0020E900 = value;
    D_0020E904 = D_0020E904 == 0;
}