/* LEVEL_16:000450 -- reads the table entry when the index is in range. */
extern float D_001C0430[];
float func_000450(int a0)
{
    if (a0 < 8) {
        return D_001C0430[a0];
    }
    return 0.0f;
}
