class Solution {
	public boolean areOccurrencesEqual(String s) {
		HashMap<Character, Integer> map = new HashMap<>();
		for(int i=0; i<s.length(); ++i){
			map.put(s.charAt(i), map.getOrDefault(s.charAt(i), 0)+1);
		}
		int count = map.get(s.charAt(0));
		for(int i=1; i<s.length(); ++i){
			if(map.get(s.charAt(i)) != count)
			   return false;
		}
		return true;
	}
}
