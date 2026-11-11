extern void func_04A988(float scale, int owner, int count, void **out, float *pos, void *ent, float *dir, int flags, char *table);

void *func_04B308(float scale, int owner, float *pos, void *ent, float *dir, int flags, char *table)
{
    void *output[4];
    output[0] = 0;
    func_04A988(scale, owner, 1, output, pos, ent, dir, flags, table);
    return output[0];
}
