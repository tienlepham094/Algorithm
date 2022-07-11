class Solution(object):
    def minMovesToSeat(self, seats, students):
        """
        :type seats: List[int]
        :type students: List[int]
        :rtype: int
        """
        seats.sort(key = lambda x : x)
        students.sort(key = lambda x : x)

        result = 0

        for seat, student in zip(seats, students):
            result += (abs(seat - student))

        return (result)