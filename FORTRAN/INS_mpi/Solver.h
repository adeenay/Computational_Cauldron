#define GRID 1 

#if GRID == 1
#define SOLVER_GRID_UG

#else
#define SOLVER_GRID_NON_UG

#endif

#define SOLVER 3

#if SOLVER == 1
#define POISSON_SOLVER_JACOBI
#define omega 1.0
#endif

#if SOLVER == 2
#define POISSON_SOLVER_GS
#define omega 1.0
#endif

#if SOLVER == 3
#define POISSON_SOLVER_GSOR
#define omega 1.4
#endif

#define MAX_STRING_LENGTH 80

#define Nxb 15
#define Nyb 15

#define D_xmin -0.5
#define D_ymin -0.5

#define D_xmax 0.5
#define D_ymax 0.5

#define HK 3
#define HD 2
 
#define MaxIt 600
