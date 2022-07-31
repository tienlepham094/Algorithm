class Solution(object):
    def flipAndInvertImage(self, image):
        """
        :type image: List[List[int]]
        :rtype: List[List[int]]
        """
        for row in image:
            for i in xrange((len(row)+1)/2):
                row[i], row[~i] = row[~i]^1, row[i]^1
        return image