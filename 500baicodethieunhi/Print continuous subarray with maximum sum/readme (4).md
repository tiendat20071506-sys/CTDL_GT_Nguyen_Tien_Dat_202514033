# In Mảng Con Liên Tiếp Có Tổng Lớn Nhất

## Giải thích thuật toán

Chương trình sử dụng thuật toán Kadane mở rộng để tìm mảng con liên tiếp có tổng lớn nhất, đồng thời lưu vết lại vị trí bắt đầu và kết thúc của mảng con đó:

1. **Khởi tạo**: Đặt `tong_max` (tổng lớn nhất tìm được) và `tong_ht` (tổng của mảng con hiện tại) bằng phần tử đầu tiên của mảng. Các biến `dau` (vị trí đầu), `cuoi` (vị trí cuối) và `tam` (vị trí đầu tạm thời) được khởi tạo bằng 0.
2. **Duyệt mảng**: Vòng lặp chạy từ phần tử thứ 2 (`i = 1`) đến cuối mảng:
   - Nếu `tong_ht < 0`, mảng con trước đó mang giá trị âm sẽ làm giảm tổng nếu cộng tiếp. Do đó, chương trình "làm lại từ đầu" bằng cách gán `tong_ht = a[i]` và đánh dấu vị trí bắt đầu tạm thời mới `tam = i`.
   - Ngược lại, nếu `tong_ht >= 0`, chương trình tiếp tục cộng dồn `a[i]` vào `tong_ht`.
3. **Cập nhật mảng con lớn nhất**: Sau mỗi bước tính `tong_ht`, nếu thấy `tong_ht > tong_max`, chương trình sẽ cập nhật lại `tong_max = tong_ht`, đồng thời chốt vị trí bắt đầu chính thức `dau = tam` và vị trí kết thúc `cuoi = i`.
4. **In kết quả**: Sử dụng vòng lặp từ chỉ số `dau` đến chỉ số `cuoi` để in ra các phần tử thuộc mảng con có tổng lớn nhất.

### Độ phức tạp:

* **Độ phức tạp thời gian (Time Complexity)**: O(N) vì chương trình chỉ cần một vòng lặp duy nhất để duyệt qua toàn bộ mảng (trong đó N là số lượng phần tử của mảng).

## Các Testcase Minh Họa

### Testcase 1

* **Input:**
  * Các phần tử: `-2, 1, -3, 4, -1, 2, 1, -5, 4`

* **Output:**
  > The contiguous subarray with the largest sum is {4, -1, 2, 1}

### Testcase 2

* **Input:**
  * Các phần tử: `8, -7, -3, 5, 6, -2, 3, -4, 2`

* **Output:**
  > The contiguous subarray with the largest sum is {5, 6, -2, 3}