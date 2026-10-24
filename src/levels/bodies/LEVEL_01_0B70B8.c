/* LEVEL_01.REL:0x0B70B8 -- rebinds one sound slot to the caller's handle,
   clearing the volume gate of the slot when it changes. */
extern int D_001FC7E0[];
extern float D_001FC998[];

void func_0B70B8(int a0, int a1)
{
    if (D_001FC7E0[a0] != 0 && D_001FC7E0[a0] != a1) {
        if (D_001FC998[a0] == 0.0f) D_001FC998[a0] = 1.0f;
    }
    D_001FC7E0[a0] = a1;
}
