typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_002FC47C[];
extern void func_0E7410(Entry *entry);

void func_0E7540(unsigned int index) {
    func_0E7410(&D_002FC47C[index]);
}
