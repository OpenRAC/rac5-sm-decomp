typedef struct { char b[0x28]; } tPAR_BLOCK;

extern tPAR_BLOCK par_blocks[];
extern void func_1E7AC78(void *a, void *b, void *c, void *d);

void PAR_Emit__FPiii(void *a, int i, void *d) {
    tPAR_BLOCK *b = &par_blocks[i];
    func_1E7AC78(a, (char *)b + 0x10, b, d);
}
