

//integer

#ifdef INTEGER

void fillArrInt(int* a, int n);
void showArrInt(const int* a, const int n);
void bubbleSortArrInt(int a[], int n);
void minInt(int arr[], int n);
void maxInt(int* arr, int n);
void izmInt(int arr[], int n);

#define fillArr fillArrInt
#define showArr showArrInt
#define bubbleSortArr  bubbleSortArrInt
#define mins minInt
#define maxs maxInt
#define izm izmInt


//
///float
#endif

#ifdef Float

void showArrfloat(float* a, int n);
void fillArrfloat(float* a, int n);
void bubbleSortArrfloat(float a[], int n);
void minfloat(float* arr, int n);
void maxfloat(float* arr, int n);
void izmfloat(float* arr, int n);

#define showArr showArrfloat
#define fillArr fillArrfloat
#define bubbleSortArr  bubbleSortArrfloat
#define mins minfloat
#define maxs maxfloat
#define izm izmfloat

///
////char
#endif

#ifdef Char

void showArrchar(char* a, int n);
void fillArrchar(char* a, int n);
void bubbleSortArrchar(char a[], int n);
void minchar(char* arr, int n);
void maxchar(char* arr, int n);
void izmchar(char* arr, int n);

#define showArr showArrchar
#define fillArr fillArrchar
#define bubbleSortArr bubbleSortArrchar
#define mins minchar
#define maxs maxchar
#define izm izmchar

////

#endif
