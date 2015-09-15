import unittest
import PAT1012_TheBestRank_forTest 
from PAT1012_TheBestRank_forTest import bank
class test1012(unittest.TestCase):
    N=5
    M=6
    allData=[['310101',98,85,88],['310102',70,95,88],['310103',82,87,94],['310104',91,91,91],['310105',85,90,90]]
    NeedCheck=['310101','310102','310103','310104','310105','999999',]
    def test_1(self):

        self.assertEqual(bank(self.N,self.M,self.allData,self.NeedCheck),[[1,'C'],[1,'M'],[1,'E'],[1,'A'],[3,'A'],'N/A'])
if __name__=="__main__":
    unittest.main()
