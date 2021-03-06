module IO_interface

#include "Solver.h"

       implicit none

       interface
             subroutine IO_display(u_res,v_res,p_res,p_counter,simtime)
             implicit none
             real, intent(in) :: u_res,v_res,p_res,simtime
             integer, intent(in) :: p_counter
             end subroutine IO_display
       end interface

       interface
             subroutine IO_write(x,y,uu,vv,pp,id)
             implicit none
             real, dimension(Nxb+1,Nyb+1), intent(in) :: x,y,uu,vv,pp
             integer, intent(in) :: id
             end subroutine IO_write
       end interface
end module IO_interface
