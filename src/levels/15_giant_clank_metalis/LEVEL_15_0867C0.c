typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_001CB498[];
extern void func_086690(Entry *entry);

void func_0867C0(unsigned int index) {
    func_086690(&D_001CB498[index]);
}
