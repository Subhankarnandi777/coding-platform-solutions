import java.util.*;

class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> spiralOrder = new ArrayList<>();
        int srow = 0, scol = 0;
        int erow = matrix.length - 1;
        int ecol = matrix[0].length - 1;

        while (srow <= erow && scol <= ecol) {
            for (int i = scol; i <= ecol; i++) {
                spiralOrder.add(matrix[srow][i]);
            }
            srow++;

            for (int i = srow; i <= erow; i++) {
                spiralOrder.add(matrix[i][ecol]);
            }
            ecol--;

            if (srow <= erow) {
                for (int i = ecol; i >= scol; i--) {
                    spiralOrder.add(matrix[erow][i]);
                }
                erow--;
            }

            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    spiralOrder.add(matrix[i][scol]);
                }
                scol++;
            }
        }
        return spiralOrder;
    }
}
