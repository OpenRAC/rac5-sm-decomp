extern void func_115A38(int, void *, long long, long long, long long);

void MEM_malloc_uncached__FUi12MEMAssetTypePcUi(unsigned int value, long long a, long long b, long long c)
{
    func_115A38(0x40, (void *)((value + 0x40u) & ~0x3fu), a, b, c);
}
