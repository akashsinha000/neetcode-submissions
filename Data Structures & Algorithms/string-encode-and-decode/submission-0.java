class Solution {

    public String encode(List<String> strs) {
        StringBuilder sb = new StringBuilder();

        for (String str : strs) {
            sb.append(str.length());
            sb.append("#");
            sb.append(str);
        }

        return sb.toString();
    }

    public List<String> decode(String encoded_string) {
        List<String> result = new ArrayList<>();

        int i = 0;

        while (i < encoded_string.length()) {

            int j = i;

            while (encoded_string.charAt(j) != '#') {
                j++;
            }

            int length = Integer.parseInt(encoded_string.substring(i, j));

            int start = j + 1;

            String str = encoded_string.substring(start, start + length);

            result.add(str);

            i = start + length;
        }

        return result;
    }
}