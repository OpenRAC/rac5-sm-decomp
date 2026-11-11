extern char *D_001DE154;
extern void func_11DC18(void *object, void *destination, const void *a,
                         const void *b, const void *c);

void func_003460(char *self) {
    char *source = D_001DE154;
    float *vector = (float *)(source + 0x44);
    float *destination;
    func_11DC18(self, self + 0x18, vector, source + 0x6C,
                source + 0x54);
    destination = (float *)(self + 0x0C);
    destination[0] = vector[0];
    destination[1] = vector[1];
    destination[2] = vector[2];
}
