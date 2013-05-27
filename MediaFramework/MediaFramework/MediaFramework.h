// MediaFramework.h

#pragma once


namespace MediaFramework {

	public enum class AudioCodec
	{

	};

	public enum class VideoCodec
	{
		H264, MPEG2 
	};

	public enum class Container
	{
		WMV, MP4, MKV
	};

	public ref class MediaType abstract
	{
	public:
		int ID;
	};

	public ref class Audio : MediaType
	{
	public:
		Audio();

		Container con;
		AudioCodec cod;
		void Play();
	};

	public ref class Video : MediaType
	{
	public:
		Video();

		Container con;
		VideoCodec cod;
		int VertRes;
		int HoriRes;
		void Play();
	};


}
