typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_001CB498[];
extern void func_086690(Entry *entry, int value);

void func_0867C0(unsigned int index, int value) {
    func_086690(&D_001CB498[index], value);
}
