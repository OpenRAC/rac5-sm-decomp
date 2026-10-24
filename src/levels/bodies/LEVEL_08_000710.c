/* LEVEL_08.REL:000710 -- returns the entry of the table D_00255130, or zero
   past its eight entries. */
extern float D_00255130[];

float func_000710(int a0)
{
    if (a0 >= 8) {
        return 0.0f;
    }
    return D_00255130[a0];
}
