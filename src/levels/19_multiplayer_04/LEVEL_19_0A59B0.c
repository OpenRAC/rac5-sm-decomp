/* LEVEL_19:0x0A59B0 -- fills the slot of the table with the new value; the
   first time a slot is reused its "seen" flag is raised. */
extern int D_001AB9E0[];
extern float D_001ABB98[];

void func_0A59B0(int index, int value)
{
    if (D_001AB9E0[index] != 0 && D_001AB9E0[index] != value) {
        if (D_001ABB98[index] == 0.0f)
            D_001ABB98[index] = 1.0f;
    }
    D_001AB9E0[index] = value;
}
