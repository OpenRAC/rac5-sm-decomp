extern char *D_0019BE5C;
extern void func_105D70(void *object, void *destination, const void *a,
                         const void *b, const void *c);

void func_003058(char *self) {
    char *source = D_0019BE5C;
    float *vector = (float *)(source + 0x44);
    float *destination;
    func_105D70(self, self + 0x18, vector, source + 0x6C,
                source + 0x54);
    destination = (float *)(self + 0x0C);
    destination[0] = vector[0];
    destination[1] = vector[1];
    destination[2] = vector[2];
}
