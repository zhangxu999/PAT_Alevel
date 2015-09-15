import unittest
from PAT1007_MaximumSubsequenceSum2 import getMaxSeq
class Test1007(unittest.TestCase):

  def test_less0(self):
      self.assertEqual(getMaxSeq([1,2,3],3),[6,1,3])
      self.assertEqual(getMaxSeq([-1],1),[0,-1,-1])
      self.assertEqual(getMaxSeq([0],1),[0,0,0])
      self.assertEqual(getMaxSeq([0,0,0,0],4),[0,0,0])
      self.assertEqual(getMaxSeq([-1,1],2),[1,1,1])
      self.assertEqual(getMaxSeq([9],1),[9,9,9])
#      self.assertEqual(getMaxSeq([-4,0,4],3),[4,4,4])
      self.assertEqual(getMaxSeq([-3,0,3],3),[3,3,3])
      self.assertEqual(getMaxSeq([-3,3,3-7],3),[6,1,2])



#  def test_isupper(self):
   #   self.assertTrue('FxO'.isupper())
    #  self.assertFalse('Foo'.isupper())
'''
  def test_split(self):
      s = 'hello world'
      self.assertEqual(s.split(), ['hello', 'world'])
      # check that s.split fails when the separator is not a string
      with self.assertRaises(TypeError):
          s.split(2)
'''
if __name__ == '__main__':
    unittest.main()