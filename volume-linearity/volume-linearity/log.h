// log.h

#define LOG(format, ...) wprintf(format L"\n", __VA_ARGS__)
#define ERR(format, ...) wprintf(L"ERROR: " format L"\n", __VA_ARGS__)